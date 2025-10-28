int __fastcall sub_1E6320(int a1, int a2, const char *a3, int a4, int a5, int a6, int *a7)
{
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r6
  size_t v13; // r0
  void *v15; // [sp+8h] [bp-Ch] BYREF
  int v16[2]; // [sp+Ch] [bp-8h] BYREF

  v10 = sub_16F67C(a1);
  v11 = ((int (__fastcall *)(int))loc_1E2798)(v10);
  v12 = (_DWORD *)dword_488C94;
  v15 = *(void **)dword_488C94;
  v16[0] = sub_1E28B8(v11) - 1;
  if ( a6 )
  {
    sub_259880("Reading %s from remote target...\n", a3);
    if ( !dword_488CE8 )
    {
      sub_946D8("File transfers from remote targets can be slow. Use \"set sysroot\" to access files locally instead.");
      dword_488CE8 = 1;
    }
  }
  if ( sub_1E620C(a2, a7) )
    return -1;
  sub_1E16BC(&v15, v16, "vFile:open:");
  v13 = strlen(a3);
  sub_1E1658((_BYTE **)&v15, v16, (int)a3, v13);
  sub_1E16BC(&v15, v16, (char *)&word_3D7D68);
  sub_1E132C((int *)&v15, v16, a4);
  sub_1E16BC(&v15, v16, (char *)&word_3D7D68);
  sub_1E132C((int *)&v15, v16, a5);
  return sub_1E6058((int)v15 - *v12, 11, a7, 0, 0);
}
