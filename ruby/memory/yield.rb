require "objspace"


def perform(&block)
  yield if block_given?
end

puts GC.stat

array = ["a"] * 1_000_000

puts array.object_id

puts GC.stat
#ObjectSpace.dump_all(output: File.new("yield-1.txt", "w"))

perform do
  puts array.object_id
end

puts GC.stat
#ObjectSpace.dump_all(output: File.new("yield-2.txt", "w"))
