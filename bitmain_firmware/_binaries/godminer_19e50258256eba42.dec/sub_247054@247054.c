__int64 __fastcall sub_247054(int a1, unsigned __int64 a2)
{
  __int64 result; // r0

  *(_QWORD *)(a1 + 64) += a2;
  result = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = result + (a2 > *(_QWORD *)(a1 + 64));
  return result;
}
