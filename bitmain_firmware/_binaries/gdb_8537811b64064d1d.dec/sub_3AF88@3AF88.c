int __fastcall sub_3AF88(int a1)
{
  int v2; // r5
  int result; // r0

  sub_1FDE4C();
  (*(void (__fastcall **)(int, _DWORD))(a1 + 8240))(a1, *(_DWORD *)(a1 + 8236));
  v2 = sub_1FDE3C(a1);
  result = sub_1FDE5C(a1);
  if ( v2 )
    return sub_3AE34((_DWORD *)a1);
  return result;
}
