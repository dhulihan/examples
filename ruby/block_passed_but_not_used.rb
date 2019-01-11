def foo(arg, &block)
  puts arg
  #block.call(arg)
end

foo("hello")
