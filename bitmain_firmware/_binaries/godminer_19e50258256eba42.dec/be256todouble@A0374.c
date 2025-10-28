int __fastcall be256todouble(int a1)
{
  __int64 v1; // r0
  __int64 v2; // r0
  __int64 v3; // r0
  __int64 v4; // r0

  LODWORD(v1) = sub_9FD90(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  sub_345474(v1);
  LODWORD(v2) = sub_9FD90(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  sub_345474(v2);
  LODWORD(v3) = sub_9FD90(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  sub_345474(v3);
  LODWORD(v4) = sub_9FD90(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
  return sub_345474(v4);
}
