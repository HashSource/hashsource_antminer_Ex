int __fastcall subject_observe(int result, int a2)
{
  *(_DWORD *)(result + 4 * (*(_DWORD *)(result + 1024))++) = a2;
  return result;
}
