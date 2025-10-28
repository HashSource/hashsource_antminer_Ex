int __fastcall strbuffer_append_byte(const void **a1, char a2)
{
  char v3; // [sp+7h] [bp-5h] BYREF

  v3 = a2;
  return strbuffer_append_bytes(a1, &v3, 1u);
}
