﻿#region Usings

using BooGearPlugin.Modifiers.Gear;
using BooGearPlugin.Modifiers.Poly;
using NaroConstants.Names;
using NaroPipes.Actions;
using NaroUiBuilder;
using PluginInterface;
using TreeData.Utils;

#endregion

namespace BooGearPlugin
{
    [NaroRegister]
    public class ModifierRegister
    {
        public void Register(ActionsGraph actionsGraph)
        {
            Ensure.ArgumentNotNull(actionsGraph, "actionsGraph");
            RegisterModifiers(actionsGraph);
            RegisterUi(actionsGraph);
        }

        private static void RegisterModifiers(ActionsGraph actionsGraph)
        {
            actionsGraph.ModifierContainer.Register<BooRegularPolygon>();
            actionsGraph.ModifierContainer.Register<BooGearShape>();
        }

        private static void RegisterUi(ActionsGraph actionsGraph)
        {
            var uiBuilderInput = actionsGraph[InputNames.UiBuilderInput];
            Ensure.ArgumentNotNull(uiBuilderInput, "uiBuilderInput");
            var dataPackage = uiBuilderInput.GetData(NotificationNames.GetValue);
            Ensure.ArgumentNotNull(dataPackage, "dataPackage");
            var uiBuilder = dataPackage.Get<UiBuilder>();
            Ensure.ArgumentNotNull(uiBuilder, "uiBuilder");

            RegisterPluginUi.Register(uiBuilder);
        }
    }
}