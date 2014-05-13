describe 'Addon run callback', () ->

  describe 'callback should be called', () ->
    it 'with "hello world"', (done) ->
      addon.runcallback (res) ->
        expect(res).to.equal 'hello world'
        done()
