### Girlypopdex Generation Rules ###

GIRLYPOPDEX_SOURCE := girlypopdex.txt
GIRLYPOPDEX_ENTRIES_H := include/constants/girlypopdex_entries.h
GIRLYPOPDEX_UPDATES_H := src/data/pokemon/species_info_updates.h

$(GIRLYPOPDEX_ENTRIES_H) $(GIRLYPOPDEX_UPDATES_H): $(GIRLYPOPDEX_SOURCE)
	@$(PYTHON) tools/update_girlypopdex.py
