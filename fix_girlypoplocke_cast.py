#!/usr/bin/env python3
import re

# Read the file
with open('/home/squiddonaut/GPLDev/GPL-All-Stars/src/data/pokemon/girlypoplocke_data.h', 'r') as f:
    content = f.read()

# Pattern to match entries in the girlypoplocke list
# Matches: {SPECIES_XXX, "nickname", GIRLYPOPLOCKE_XXX},
pattern = r'(\{SPECIES_\w+,\s*)"([^"]+)"(\s*,\s*GIRLYPOPLOCKE_\w+\})'

# Replacement adds (const u8 *) cast before the string
replacement = r'\1(const u8 *)"\2"\3'

# Perform the replacement
content = re.sub(pattern, replacement, content)

# Write back to file
with open('/home/squiddonaut/GPLDev/GPL-All-Stars/src/data/pokemon/girlypoplocke_data.h', 'w') as f:
    f.write(content)

print("Added (const u8 *) casts to all nickname strings in girlypoplocke_data.h")
