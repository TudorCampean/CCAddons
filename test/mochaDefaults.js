var chai = require('chai');

global.expect = chai.expect;
global.assert = chai.assert;
global.should = chai.should();

global.addon = require('../build/Release/addon.node');
global.addonObject = require('../build/Release/addonWrappedObject.node');
