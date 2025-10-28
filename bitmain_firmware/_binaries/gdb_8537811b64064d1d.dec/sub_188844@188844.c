_DWORD *__fastcall sub_188844(int a1)
{
  int v2; // r8
  int *v3; // r0
  int v4; // r7
  int *v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int *v9; // r5
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r4
  _DWORD *result; // r0
  int v15; // r0
  int v16[3]; // [sp+1Ch] [bp-14h] BYREF
  unsigned __int8 v17; // [sp+28h] [bp-8h]
  int v18; // [sp+2Ch] [bp-4h]

  v2 = dword_487960;
  v3 = (int *)sub_243004(a1);
  v4 = *v3;
  v5 = v3;
  *v3 = a1;
  v6 = ((int (*)(void))loc_23DC0C)();
  v7 = sub_CEDC8(*(_DWORD **)(v6 + 136), v2) + 1;
  switch ( v7 )
  {
    case 0:
      if ( !*(_DWORD *)(v6 + 132) )
        goto LABEL_5;
      v8 = sub_15F734(v7);
      ((void (__fastcall *)(int *, int))loc_15CFC8)(v16, v8);
      if ( !sub_15D0EC(
              *(_DWORD *)(v6 + 76),
              *(_DWORD *)(v6 + 80),
              *(_DWORD *)(v6 + 84),
              *(_DWORD *)(v6 + 88),
              *(_DWORD *)(v6 + 92),
              v16[0],
              v16[1],
              v16[2],
              v17,
              v18) )
        goto LABEL_5;
      v9 = *(int **)(v6 + 68);
      if ( v9 != sub_C3488(dword_4878F8) )
        goto LABEL_5;
      goto LABEL_10;
    case 1:
LABEL_5:
      v10 = 1;
      goto LABEL_6;
    case 2:
LABEL_10:
      v10 = -1;
LABEL_6:
      v11 = sub_15F810(0);
      v7 = sub_20E810(v11, 0, v10);
      break;
    case 3:
      break;
    default:
      v15 = sub_94728((int)"infrun.c", 8029, "Unknown value.");
      *v5 = v4;
      sub_339024(v15);
  }
  v12 = sub_1C8F44(v7);
  *v5 = v4;
  v13 = ((int (__fastcall *)(int))loc_23DC0C)(v12);
  result = *(_DWORD **)(v13 + 204);
  if ( result )
  {
    result = (_DWORD *)sub_2422A8(result);
    if ( result )
    {
      result = (_DWORD *)sub_242280(*(_DWORD *)(v13 + 204));
      if ( result )
        return (_DWORD *)sub_181794(a1, result);
    }
  }
  return result;
}
