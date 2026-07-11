import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.zathurarc.TreeSitterZathurarc;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterZathurarcTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterZathurarc.language()));
    }
}
