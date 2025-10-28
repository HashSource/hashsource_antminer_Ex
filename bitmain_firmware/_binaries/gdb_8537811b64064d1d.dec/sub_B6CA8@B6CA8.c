int __fastcall sub_B6CA8(int result, int a2)
{
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
