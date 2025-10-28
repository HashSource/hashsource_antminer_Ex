int __fastcall sub_233DE8(int a1, unsigned __int64 a2)
{
  *(_QWORD *)(a1 + 64) += a2;
  *(_QWORD *)(a1 + 72) += a2 > *(_QWORD *)(a1 + 64);
  return 0;
}
