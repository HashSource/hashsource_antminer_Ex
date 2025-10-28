int sub_10C264()
{
  int v0; // r0

  v0 = sub_53708(
         "disassembler-options",
         -1,
         (int)&dword_4872BC,
         "Set the disassembler options.\n"
         "Usage: set disassembler-options <option>[,<option>...]\n"
         "\n"
         "See: 'show disassembler-options' for valid option values.\n",
         "Show the disassembler options.",
         0,
         (int)sub_10C254,
         (int)sub_10B914,
         (int **)&dword_47475C,
         (int **)&dword_47474C);
  return sub_53274(v0, 1095872);
}
