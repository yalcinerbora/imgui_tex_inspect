// ImGuiTexInspect, a texture inspector widget for dear imgui

#pragma once
#include "imgui.h"

namespace ImGuiTexInspect
{
struct Texture
{
    void *texture;
    ImVec2 size;
};

Texture LoadTexture(const char *path);

void ShowDemoWindow();
} //namespace ImGuiTexInspect
