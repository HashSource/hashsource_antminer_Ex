int sub_243564()
{
  int v0; // r4
  int result; // r0

  v0 = dword_487668;
  do
    result = sub_152C8C();
  while ( result >= 0 && !*(_DWORD *)(v0 + 68) );
  dword_487668 = v0;
  return result;
}
