int __fastcall sub_dev_init_hal(unsigned int a1)
{
  _DWORD *v1; // r3

  LOWORD(v1) = -14664;
  HIWORD(v1) = (unsigned int)&unk_16B4C8 >> 16;
  if ( a1 >= *v1 )
    puts("warning: get pcie fd error");
  return g_chain_info[2 * a1];
}
