int __fastcall sub_1EDD08(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5
  _BYTE **v5; // r8
  int v6; // r0
  size_t *v7; // r7
  int v8; // r0
  size_t v9; // r2
  char *v10; // r1
  const char *v11; // r4
  int result; // r0
  _BYTE s[32]; // [sp+8h] [bp-1Ch] BYREF

  v2 = 0;
  v3 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v3);
  v4 = 0;
  v5 = (_BYTE **)dword_488C94;
  v6 = sub_1DD5B4(a1);
  v7 = (size_t *)((int (__fastcall *)(int))loc_1E2798)(v6);
  memset(s, 0, *v7);
  while ( 1 )
  {
    v8 = sub_1DD5B4(a1);
    if ( v4 >= ((int (__fastcall *)(int))loc_166EC4)(v8) )
      break;
    v9 = v7[1];
    if ( *(_DWORD *)(v9 + v2 + 16) )
      ((void (__fastcall *)(int, _DWORD, _BYTE *))loc_1DEBD4)(a1, *(_DWORD *)(v9 + v2 + 4), &s[*(_DWORD *)(v9 + v2)]);
    ++v4;
    v2 += 24;
  }
  v10 = *v5;
  *v10 = 71;
  sub_99448((int)s, v10 + 1, *v7);
  sub_1E7E14(*v5);
  sub_1E4EE0(v5, (size_t *)v5 + 1, 0, 0, 0);
  v11 = *v5;
  result = sub_1E1728(*v5);
  if ( !result )
    sub_94708("Could not write registers; remote failure reply '%s'", v11);
  return result;
}
