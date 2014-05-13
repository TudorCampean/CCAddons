describe 'Addon hello world test', () ->

  describe 'Hello should work', () ->
    it 'and it should say world', () ->
      expect(addon.hello()).to.equal 'world'