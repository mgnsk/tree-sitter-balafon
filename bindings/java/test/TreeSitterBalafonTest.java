import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.balafon.TreeSitterBalafon;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterBalafonTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterBalafon.language()));
    }
}
