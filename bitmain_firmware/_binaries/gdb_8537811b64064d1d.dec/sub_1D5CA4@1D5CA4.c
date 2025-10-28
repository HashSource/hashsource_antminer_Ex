int __fastcall sub_1D5CA4(int a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // r5
  int v10; // r0
  bool v11; // zf
  bool v12; // zf
  int v13; // r4
  _DWORD *v15; // r0
  _DWORD v16[2]; // [sp+8h] [bp-10h] BYREF
  int v17[2]; // [sp+10h] [bp-8h] BYREF

  v9 = *(_DWORD *)sub_243004(a1);
  v10 = sub_2578D4(v9, 0);
  if ( dword_487D4C )
  {
    v15 = (_DWORD *)sub_242FF0(v10);
    v10 = sub_2594D8(*v15, "[record-btrace] call-history (0x%x): [%u; %u)\n", a7, a3, a5);
  }
  v11 = a4 == 0;
  if ( !a4 )
    v11 = 1;
  if ( !v11 )
    goto LABEL_17;
  v12 = a6 == 0;
  if ( !a6 )
    v12 = 1;
  if ( !v12 )
LABEL_17:
    sub_94708("Bad range.");
  if ( a3 > a5 )
    sub_94708("Bad range.");
  v13 = sub_1D4A14(v10) + 252;
  if ( !sub_E1E30(v16, v13, a3) )
    sub_94708("Range out of bounds.");
  if ( sub_E1E30(v17, v13, a5) )
    sub_E1C88(v17, 1);
  else
    sub_E1C4C(v17, v13);
  ((void (__fastcall *)(int, int, _DWORD *, int *, int))loc_1D5878)(v9, v13, v16, v17, a7);
  ((void (__fastcall *)(int, _DWORD *, int *))loc_E1EC4)(v13, v16, v17);
  return sub_257374(v9, 0);
}
