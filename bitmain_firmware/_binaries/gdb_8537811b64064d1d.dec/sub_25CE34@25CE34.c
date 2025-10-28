int __fastcall sub_25CE34(int a1, __int64 a2)
{
  int v4; // r7
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r1
  char *v8; // r2
  int v9; // r3
  bool v10; // zf
  int v11; // r0
  __int64 v13; // r2
  __int64 v14; // [sp+8h] [bp-14h] BYREF
  __int64 v15; // [sp+10h] [bp-Ch] BYREF

  v4 = *((unsigned __int8 *)off_46D5A4[0] + 112);
  v5 = sub_26EA4C(a1);
  v6 = (_DWORD *)sub_26BC98(v5);
  v8 = *(char **)(sub_171280(v6) + 24);
  v9 = *v8;
  v10 = v9 == 2;
  if ( v9 != 2 )
    v10 = v9 == 13;
  if ( !v10 )
  {
    if ( !v4 )
      sub_94708("not an array or string");
    goto LABEL_5;
  }
  sub_171984(*(_DWORD **)(*((_DWORD *)v8 + 6) + 12), &v14, &v15);
  if ( *(_DWORD *)nullsub_31(v5) == 1 )
  {
    v13 = v14;
    if ( !v4 )
    {
      if ( a2 >= v14 && v15 >= a2 )
        return sub_25CD04(v5, a2, v14);
      if ( v15 >= 0 )
      {
        sub_946D8("array or string index out of range", HIDWORD(v15), v14);
        v13 = v14;
      }
    }
    a2 -= v13;
    v5 = sub_261634(v5);
LABEL_5:
    v11 = ((int (__fastcall *)(int, int, _DWORD, _DWORD))loc_25CABC)(v5, v7, a2, HIDWORD(a2));
    return sub_262134(v11);
  }
  return sub_25CD04(v5, a2, v14);
}
