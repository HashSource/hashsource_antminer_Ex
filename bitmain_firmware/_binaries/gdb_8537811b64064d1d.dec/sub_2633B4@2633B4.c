int __fastcall sub_2633B4(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r2
  void *v11; // r9
  int v12; // r5
  int v13; // r6
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int *v17; // r0
  __int64 v19; // r0

  v8 = (_DWORD *)sub_26BC98(a1);
  v9 = sub_171280(v8);
  v10 = **(char **)(v9 + 24);
  if ( (unsigned __int8)(v10 - 18) <= 1u )
  {
    v12 = sub_26EA4C(a1);
  }
  else
  {
    if ( v10 != 1 )
      return 0;
    v11 = sub_92E50();
    v12 = sub_262134(a1);
    sub_92E68((int)v11);
  }
  v13 = sub_FC700(v12, a2, a3, a4);
  if ( v13 )
  {
    v14 = sub_26BC98(v12);
    v15 = (_DWORD *)((int (__fastcall *)(int, int, int, _DWORD))loc_1704A0)(
                      *(_DWORD *)(v14 + 16) & 1,
                      (*(_DWORD *)(v14 + 16) >> 1) & 1,
                      v13,
                      0);
    v16 = **(char **)(v9 + 24);
    if ( (unsigned __int8)(v16 - 18) <= 1u )
    {
      sub_170248();
LABEL_17:
      JUMPOUT(0x16FBBC);
    }
    if ( v16 == 1 )
    {
      sub_1700E8(v15);
      goto LABEL_17;
    }
    v19 = sub_94728((int)"valops.c", 3641, "Unexpected value type.");
    if ( HIDWORD(v19) != 1 )
    {
      sub_339EA0(v19);
      sub_92E88();
    }
    v17 = (int *)sub_339EA0(v19);
    if ( v17[1] != 8 )
      sub_92F44(*v17, v17[1], v17[2]);
    sub_339F20(v17);
  }
  return 0;
}
