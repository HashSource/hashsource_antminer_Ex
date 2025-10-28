_DWORD *__fastcall sub_182118(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r5
  _DWORD *v9; // r4
  _DWORD *result; // r0
  _BYTE s[40]; // [sp+10h] [bp-28h] BYREF

  v5 = a4;
  if ( a4 )
    v5 = 1;
  memset(s, 0, sizeof(s));
  if ( dword_4878EC != dword_475848 || dword_4878F0 != dword_47584C || dword_4878F4 != dword_475850 )
  {
    ((void (__fastcall *)(_BYTE *))loc_23FF48)(s);
    s[36] = 1;
  }
  v6 = sub_23E430(a1, a2, a3);
  sub_23F90C(v6);
  v7 = ((int (__fastcall *)(int, int, int))loc_23F224)(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( v7 )
  {
    v8 = sub_1836B0(v7);
    sub_231EDC(dword_4878EC, dword_4878F0, dword_4878F4);
    *(_DWORD *)(v8 + 24) = 2;
    v9 = sub_93050(0xCu);
    *v9 = sub_32727C("");
    v9[1] = a5;
    v9[2] = v5;
    result = sub_F850C((int)sub_181F10, (int)v9, (int)sub_17E86C);
  }
  else
  {
    result = (_DWORD *)sub_181D58(a5, v5);
  }
  if ( s[36] )
  {
    s[36] = 0;
    return (_DWORD *)((int (__fastcall *)(_BYTE *))loc_23FCB4)(s);
  }
  return result;
}
