.PHONY: clean All

All:
	@echo "----------Building project:[ wxOpenGL - Debug ]----------"
	@cd "wxOpenGL" && "$(MAKE)" -f  "wxOpenGL.mk"
clean:
	@echo "----------Cleaning project:[ wxOpenGL - Debug ]----------"
	@cd "wxOpenGL" && "$(MAKE)" -f  "wxOpenGL.mk" clean
