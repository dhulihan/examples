require "benchmark"

n = 10000
Benchmark.bm do |b|
  a = ["a"] * 1000

  b.report("to_a") do
    n.times do
      a.clone.to_a
    end
  end

  b.report("uniq") do
    n.times do
      a.clone.uniq
    end
  end

  b.report("uniq!") do
    n.times do
      a.clone.uniq!
    end
  end

  b.report("to_a.uniq") do
    n.times do
      a.clone.to_a.uniq
    end
  end
end
