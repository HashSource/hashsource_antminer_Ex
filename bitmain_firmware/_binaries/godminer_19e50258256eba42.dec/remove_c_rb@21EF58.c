int *__fastcall remove_c_rb(int a1, int a2)
{
  int *v2; // r3
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v8; // [sp+10h] [bp-Ch]
  int **i; // [sp+14h] [bp-8h]

  i = 0;
  for ( i = *(int ***)a1; i != (int **)(a1 + 4); i = (int **)v2 )
  {
    v8 = 0;
    get_raw_clib_object((int)i[4], &ptr);
    v8 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v2 = i[1];
    else
      v2 = *i;
  }
  if ( i == (int **)(a1 + 4) )
    return 0;
  else
    return sub_21ED90((int *)a1, i);
}
