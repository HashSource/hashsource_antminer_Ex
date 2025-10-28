int sub_1025C0()
{
  sub_535E0(
    "static-members",
    4,
    (int)&unk_46DE94,
    "Set printing of C++ static members.",
    "Show printing of C++ static members.",
    0,
    0,
    (int)sub_101190,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "vtbl",
    4,
    (int)&unk_46DE68,
    "Set printing of C++ virtual function tables.",
    "Show printing of C++ virtual function tables.",
    0,
    0,
    (int)sub_101180,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "object",
    4,
    (int)&unk_46DE74,
    "Set printing of object's derived type based on vtable info.",
    "Show printing of object's derived type based on vtable info.",
    0,
    0,
    (int)sub_101170,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  obstack_begin(&stru_47B1DC, 128, 0, (void *(*)(int))sub_93050, sub_1011A0);
  obstack_begin((struct obstack *)&unk_47B1B0, 128, 0, (void *(*)(int))sub_93050, sub_1011A0);
  return obstack_begin(&stru_47B208, 128, 0, (void *(*)(int))sub_93050, sub_1011A0);
}
