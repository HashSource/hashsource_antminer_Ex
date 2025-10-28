void __fastcall sub_1E1E60(int a1)
{
  void *ptr; // [sp+4h] [bp-4h] BYREF

  sub_2305B8(&ptr, &dword_4899A0, 24, "");
  if ( ptr )
  {
    sub_E168C(a1, (int)ptr);
    if ( ptr )
      free(ptr);
  }
}
