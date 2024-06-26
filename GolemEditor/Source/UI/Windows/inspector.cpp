#include "UI/Windows/inspector.h"

#include "Core/gameobject.h"
#include "golemEngine.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "imgui_internal.h"
#include "Refl/refl.hpp"
#include "UI/editorUi.h"
#include "Reflection/displayType.h"

Inspector::Inspector(std::string _name)
	: Window(_name)
{
}

Inspector::~Inspector() {}

void Inspector::Update()
{
	ImGui::Begin(name.c_str());

	if (EditorUi::selected)
	{
		DisplayType::DisplayField(EditorUi::selected);
		DisplayType::AddComponentHandler(EditorUi::selected);
		
	}
	ImGui::End();
}


