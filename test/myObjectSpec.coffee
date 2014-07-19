describe 'MyObject Addon ', () ->

  describe 'it should create a object with "plusOne" property', () ->
    it 'using new', () ->
      obj = new addonObject.MyObject 10
      expect(obj.plusOne()).to.equal 11
      expect(obj.plusOne()).to.equal 12
      expect(obj.plusOne()).to.equal 13
    it 'without new ', () ->
      obj = addonObject.MyObject 10
      obj2 = addonObject.MyObject 13
      expect(obj.plusOne()).to.equal 11
      expect(obj.plusOne()).to.equal 12
      expect(obj.plusOne()).to.equal 13
      expect(obj2.plusOne()).to.equal 14
