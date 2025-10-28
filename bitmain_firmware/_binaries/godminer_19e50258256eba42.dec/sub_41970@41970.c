int sub_41970()
{
  int v0; // r0
  _DWORD v2[2]; // [sp+0h] [bp-14h] BYREF
  unsigned __int8 *v3; // [sp+8h] [bp-Ch]
  int *v4; // [sp+Ch] [bp-8h]

  v4 = (int *)&reject_reason_map;
  map_iter_(v2);
  puts("--------reject_reason_history_dump:-------");
  while ( 1 )
  {
    v3 = (unsigned __int8 *)map_next_(v4, v2);
    if ( !v3 )
      break;
    v0 = map_get_(v4, v3);
    v4[3] = v0;
    printf("%s happened %d times\n", (const char *)v3, *(_DWORD *)v4[3]);
  }
  return puts("---------------------end------------------");
}
