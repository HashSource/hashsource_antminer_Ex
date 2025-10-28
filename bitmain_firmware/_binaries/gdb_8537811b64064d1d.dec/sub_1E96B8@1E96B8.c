int __fastcall sub_1E96B8(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE **v8; // r6
  char *v9; // r4
  int v10; // r0
  int v11; // r0
  unsigned int v16; // [sp+18h] [bp-8h] BYREF

  v5 = ((int (__fastcall *)(int))loc_1E21C0)(31);
  if ( v5 == 2 )
    sub_94708("qGetTIBAddr not supported or disabled on this target");
  v6 = sub_16F67C(v5);
  v7 = ((int (__fastcall *)(int))loc_1E2798)(v6);
  v8 = (_BYTE **)dword_488C94;
  v9 = *(char **)dword_488C94;
  v10 = sub_1E28B8(v7);
  strcpy(v9, "qGetTIBAddr:");
  *sub_1E2A14((int)(v9 + 12), (int)&v9[v10], a2, a3, a4) = 0;
  sub_1E7E14(*v8);
  sub_1E4EE0(v8, (size_t *)v8 + 1, 0, 0, 0);
  v11 = sub_1E1790(*v8, dword_4888DC);
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      sub_94708("Remote target failed to process qGetTIBAddr request");
    sub_94708("Remote target doesn't support qGetTIBAddr packet");
  }
  sub_991B0(*v8, &v16);
  if ( a5 )
    *a5 = v16;
  return 1;
}
