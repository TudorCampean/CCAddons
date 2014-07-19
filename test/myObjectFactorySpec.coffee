describe 'MyObjectFactory Addon ', () ->

  describe 'it should create a object with "plusOne" property', () ->
    it 'the value of the object should increase', () ->
      obj = addon.createObject 10
      expect(obj.plusOne()).to.equal 11
      expect(obj.plusOne()).to.equal 12
      expect(obj.plusOne()).to.equal 13
      obj = addon.createObject 10
      obj2 = addon.createObject 13
      expect(obj.plusOne()).to.equal 11
      expect(obj.plusOne()).to.equal 12
      expect(obj.plusOne()).to.equal 13
      expect(obj2.plusOne()).to.equal 14
