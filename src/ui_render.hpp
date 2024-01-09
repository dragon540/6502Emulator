//
// Created by shobhit on 7/1/24.
//

#ifndef INC_6502EMULATOR_UI_RENDER_HPP
#define INC_6502EMULATOR_UI_RENDER_HPP

#include <gtk-3.0/gtk/gtk.h>

#include "instructionCycle.hpp"
#include "memory.hpp"
#include "codeLoad.hpp"

static GtkWidget *window;
static GtkListStore *colList;

static InstructionCycle IC;
static Memory *local_memRef = IC.retMemoryObj();
static CodeLoad cl;

void onWindowDestroy(GtkWidget *widget, gpointer user_data);
GtkTreeViewColumn* retTreeCol(char *ColumnHeading, GtkCellRenderer* cell, GtkWidget* treeview);
void onLoadButtonClick(GtkButton *button, GtkTextBuffer* txtBuff);
void setupUI();
void mainUI(int *f_argc, char ***f_argv);

#endif //INC_6502EMULATOR_UI_RENDER_HPP
