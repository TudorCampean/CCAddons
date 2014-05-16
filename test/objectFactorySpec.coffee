describe 'Addon object factory', () ->

  describe 'it should create a object', () ->
    it 'with "msg" property', () ->
      obj1 = addon.objectCreate('test')
      obj2 = addon.objectCreate('test2')
      expect( obj1.msg).to.equal 'test'
      expect( obj2.msg).to.equal 'test2'