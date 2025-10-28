int __fastcall sub_256984(int a1, FILE *stream)
{
  *(_DWORD *)(a1 + 4) = stream;
  *(_DWORD *)a1 = &off_3F2974;
  *(_DWORD *)(a1 + 8) = fileno(stream);
  *(_DWORD *)a1 = &off_3F29C4;
  *(_BYTE *)(a1 + 12) = 0;
  return a1;
}
