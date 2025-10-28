int __fastcall sub_160DFC(int a1, int a2)
{
  int v4; // r0
  int **v5; // r4
  int v6; // r2
  int result; // r0
  int v8; // r2
  int *v9; // r4

  v4 = sub_15ECDC(a1);
  v5 = (int **)((int (__fastcall *)(int, int))loc_16ECB0)(v4, dword_487768);
  v6 = sub_2328FC();
  if ( !v6 || (result = sub_160ACC(a1, a2, v6)) == 0 )
  {
    v8 = sub_23290C();
    if ( !v8 || (result = sub_160ACC(a1, a2, v8)) == 0 )
    {
      v9 = *v5;
      if ( v9 )
      {
        while ( 1 )
        {
          result = sub_160ACC(a1, a2, *v9);
          if ( result )
            break;
          v9 = (int *)v9[1];
          if ( !v9 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        sub_94728((int)"frame-unwind.c", 167, "frame_unwind_find_by_frame failed");
        return 1;
      }
    }
  }
  return result;
}
