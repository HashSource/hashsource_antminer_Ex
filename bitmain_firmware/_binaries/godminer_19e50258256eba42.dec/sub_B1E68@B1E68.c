int __fastcall sub_B1E68(int result)
{
  *(float *)(result + 32) = *(float *)(result + 8) - *(float *)(result + 12);
  *(_DWORD *)(result + 40) = *(_DWORD *)(result + 36);
  *(_DWORD *)(result + 36) = *(_DWORD *)(result + 32);
  return result;
}
