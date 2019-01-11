module Baz
  def self.extended(target)
    puts "Baz.extended"
  end
end

module Foo
  module ClassMethods
    def load_deps
      extend Baz
    end
  end
end

class Bar
  extend Foo::ClassMethods
  load_deps
end


