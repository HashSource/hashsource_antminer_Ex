int __fastcall sub_1E4B20(int a1)
{
  int v2; // r0
  int v3; // r5
  int (*v4)(); // r7
  int v5; // r0
  int v6; // r6
  int v8; // r0

  v2 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v2);
  v3 = dword_488C94;
  v4 = off_46D458;
  *(_DWORD *)(dword_488C94 + 52) = 0;
  v5 = *(_DWORD *)(v3 + 56);
  off_46D458 = (int (*)())sub_1E33B8;
  v6 = sub_1FDE74(v5, a1);
  if ( *(_DWORD *)(v3 + 52) )
    goto LABEL_7;
  while ( 1 )
  {
    off_46D458 = v4;
    if ( v6 >= 0 )
      break;
    if ( v6 == -3 )
    {
      sub_231E64(2);
      v8 = sub_92F8C(12, "Remote connection closed");
      off_46D458 = v4;
      sub_339024(v8);
    }
    if ( v6 != -1 )
      break;
    sub_163A8();
LABEL_7:
    sub_1580AC();
  }
  return v6;
}
