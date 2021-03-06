﻿#region Usings

using MetaActionFakesInterface;
using NUnit.Framework;

#endregion

namespace MetaActionTests.MetaActions
{
    [TestFixture]
    public class TorusMetaActionTests : MetaActionsTestBase
    {
        [Test]
        public void TorusMetaToolNodeCreationClickTest()
        {
            ShapeBuildHelper.BuildMetaActionTestTorus(Setup);

            Assert.AreEqual(2, Setup.Document.Root.Children.Count);
            Assert.AreEqual("Sketch-1", Setup.Document.Root.Children[0].Get<TreeData.AttributeInterpreter.StringInterpreter>().Value);
            Assert.AreEqual("Torus-1", Setup.Document.Root.Children[1].Get<TreeData.AttributeInterpreter.StringInterpreter>().Value);
        }
    }
}