describe 'Addon add 2 objects test', () ->

  describe 'Add should work', () ->
    it 'should throw on invalid number of arguments', () ->
      expect(addon.addObj.bind(addon, 1)).to.throw('Wrong number of arguments')
      expect(addon.addObj.bind(addon, 1, 2, 3)).to.throw('Wrong number of arguments')

    it 'should throw on invalid type of arguments', () ->
      expect(addon.addObj.bind(addon, 1, "test")).to.throw("Wrong type of arguments. MyObject required")

    it 'and it should add 2 objects', () ->
      obj = addon.createObject 10
      obj2 = addon.createObject 13
      expect(addon.addObj(obj, obj2)).to.not.equal 7
      expect(addon.addObj(obj, obj2)).to.equal 23
