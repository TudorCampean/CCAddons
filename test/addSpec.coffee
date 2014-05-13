describe 'Addon add 2 numbers test', () ->

  describe 'Add should work', () ->
    it 'should throw on invalid number of arguments', () ->
      expect(addon.add.bind(addon, 1)).to.throw('Wrong number of arguments')
      expect(addon.add.bind(addon, 1, 2, 3)).to.throw('Wrong number of arguments')

    it 'should throw on type of arguments', () ->
      expect(addon.add.bind(addon, 1, "test")).to.throw("Wrong type of arguments. Numbers required")

    it 'and it should add 2 numbers', () ->
      expect(addon.add(3, -4)).to.not.equal 7
      expect(addon.add(3, 4)).to.equal 7
      # you gotta love js :(
      expect(addon.add(3.1, 4.1)).to.equal 7.199999999999999