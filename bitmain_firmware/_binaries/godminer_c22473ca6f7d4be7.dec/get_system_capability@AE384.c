void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_16C078, 0x124u);
  return result;
}
