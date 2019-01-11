require "rspec"

RSpec.configure do |config|
  config.mock_with :rspec do |mocks|
    mocks.syntax = [:expect, :should]
  end
end

class A
  def foo
    "foo"
  end
end

class B
  def initialize
    A.new.foo
  end
end

RSpec.describe A do
	let(:a) { A.new }

  before do
		allow(a).to receive(:foo).and_return('bar')
  end

  describe "foo" do
    it "should call a stubbed foo" do
      expect(a.foo).to eq('bar')
    end
  end

  describe "non-existent method" do
		let(:a) { A.new }

		before do
			allow(a).to receive(:baz).and_return('qux')
		end

    it "should call non-existent method" do
      expect(a.baz).to eq('qux')
    end
  end
end
