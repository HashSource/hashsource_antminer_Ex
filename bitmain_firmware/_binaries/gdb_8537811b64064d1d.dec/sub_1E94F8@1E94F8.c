int __fastcall sub_1E94F8(int a1, unsigned int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  char **v7; // r5
  char *v8; // r7
  int v9; // r6
  size_t v10; // r0
  size_t v11; // r0
  int v12; // r3

  v5 = sub_16F67C(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2798)(v5);
  v7 = (char **)dword_488C94;
  v8 = *(char **)dword_488C94;
  v9 = dword_488C94;
  v10 = sub_1E28B8(v6);
  sub_93198(v8, v10, "qTSTMat:");
  v11 = strlen(v8);
  sub_1E0F9C((int)&v8[v11], a2);
  sub_1E7E14(*(const char **)v9);
  sub_1E4EE0(v7, (size_t *)(v9 + 4), 0, 0, 0);
  v12 = (unsigned __int8)**v7;
  if ( v12 == 69 )
    sub_94708("Remote failure reply: %s", *v7);
  if ( v12 != 109 )
    return 0;
  sub_24D470(*v7 + 1, 0, a3);
  return 1;
}
