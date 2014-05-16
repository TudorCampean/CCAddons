describe 'Addon function factory', () ->

  describe 'it should create a function', () ->
    it 'with "msg" property', () ->
      fnc = addon.functionCreate()
      fnc2 = addon.functionCreate()
      expect( fnc() ).to.equal 'test'
      expect( fnc2() ).to.equal 'test'