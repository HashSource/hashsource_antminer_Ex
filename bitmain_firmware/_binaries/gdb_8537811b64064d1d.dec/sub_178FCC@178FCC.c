int sub_178FCC()
{
  int *v0; // r12

  dword_48782C = (int)"gnu-v2";
  dword_487830 = (int)"GNU G++ Version 2 ABI";
  dword_487834 = (int)"G++ Version 2 ABI";
  dword_48783C = (int)sub_178F70;
  dword_487838 = (int)sub_178BBC;
  dword_487840 = (int)sub_178720;
  dword_487844 = (int)sub_178F50;
  dword_487848 = (int)sub_1789DC;
  dword_48784C = (int)sub_1787D4;
  dword_487850 = (int)sub_178C28;
  if ( dword_47AFF0[0] == 8 )
  {
    sub_94728((int)"cp-abi.c", 253, "Too many C++ ABIs, please increase CP_ABI_MAX in cp-abi.c");
    JUMPOUT(0xFC9B4);
  }
  v0 = &dword_47AFF0[dword_47AFF0[0]++];
  v0[1] = (int)&dword_48782C;
  return 1;
}
