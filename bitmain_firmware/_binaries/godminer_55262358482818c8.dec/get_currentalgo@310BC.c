int __fastcall get_currentalgo(char *a1, size_t a2)
{
  _DWORD *v2; // r2
  int v3; // r3

  LOWORD(v2) = 9244;
  LOWORD(v3) = 30224;
  HIWORD(v2) = (unsigned int)&unk_19341C >> 16;
  HIWORD(v3) = (unsigned int)&unk_148554 >> 16;
  return snprintf(a1, a2, "%s", *(const char **)(v3 + 4 * *v2 + 64));
}
