int __fastcall sub_1E49C8(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r5
  int (*v7)(); // r6
  int v8; // r0
  int result; // r0
  int v10; // r0

  v4 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v4);
  v5 = a1;
  v6 = dword_488C94;
  v7 = off_46D458;
  *(_DWORD *)(dword_488C94 + 52) = 0;
  v8 = *(_DWORD *)(v6 + 56);
  off_46D458 = (int (*)())sub_1E33B8;
  result = sub_1FDF2C(v8, v5, a2);
  if ( result )
  {
    sub_163A8();
    off_46D458 = v7;
    sub_339024(v10);
  }
  if ( *(_DWORD *)(v6 + 52) )
    result = sub_1580AC();
  off_46D458 = v7;
  return result;
}
